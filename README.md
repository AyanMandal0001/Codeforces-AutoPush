# Codeforces AutoPush

Automatically push your accepted [Codeforces](https://codeforces.com/) solutions to any GitHub repository. Runs every 30 minutes via GitHub Actions — works even when your PC is off.

## Features

- Fetches all accepted submissions from your Codeforces profile
- Pushes source code to any GitHub repo (optionally into a subfolder), organized by contest
- Backfills all historical solutions on first run
- Deduplicates: only the latest accepted solution per problem is kept
- Runs on a schedule via GitHub Actions (free for public repos)
- Supports all Codeforces languages (C, C++, Java, Python, Kotlin, Rust, Go, C#, JS, etc.)

## How Solutions Are Organized

```
<your-repo>/
  <target-dir>/                                ← configurable (default: repo root)
    pushed.json                                ← tracks already-pushed submissions
    Codeforces_Round_900_Div3_1234/
      A_Watermelon.cpp
      B_SomeTask.py
    Educational_Codeforces_Round_150_5678/
      C_HardProblem.java
```

Each contest gets its own folder. Files are named `{Index}_{ProblemName}.{ext}`.

## Setup

### 1. Fork or Clone This Repo

Click **Fork** at the top right, or clone and push to your own GitHub account:

```bash
git clone https://github.com/MontassarBr/Codeforces-AutoPush.git
cd Codeforces-AutoPush
git remote set-url origin https://github.com/YOUR_USERNAME/Codeforces-AutoPush.git
git push
```

### 2. Get Your Codeforces API Key

1. Go to [https://codeforces.com/settings/api](https://codeforces.com/settings/api)
2. Click **"Add API key"**
3. Copy the **Key** and **Secret**

> **Important**: The API key must be generated from the **same Codeforces account** as your `CF_HANDLE`. The `includeSources` API feature only returns source code for your own submissions.

### 3. Create a GitHub Personal Access Token (PAT)

The tool pushes solutions to a target repo via the GitHub API, so it needs a PAT:

1. Go to [https://github.com/settings/tokens](https://github.com/settings/tokens)
2. Click **"Generate new token (classic)"**
3. Select the **`repo`** scope
4. Copy the token

### 4. Configure GitHub Secrets

Go to **your fork of this repo** → **Settings** → **Secrets and variables** → **Actions** → **New repository secret**

| Secret Name     | Value                                           | Example                         |
|-----------------|-------------------------------------------------|---------------------------------|
| `CF_API_KEY`    | Your Codeforces API key                         |                                 |
| `CF_API_SECRET` | Your Codeforces API secret                      |                                 |
| `CF_HANDLE`     | Your Codeforces username                        | `tourist`                       |
| `GH_PAT`        | Your GitHub Personal Access Token               | `ghp_...`                       |
| `TARGET_REPO`   | The repo where solutions should be pushed       | `username/ProblemSolving`       |
| `TARGET_DIR`    | *(Optional)* Subfolder inside that repo         | `CodeForces`                    |

> If `TARGET_DIR` is left empty, solutions are pushed to the root of the target repo.

### 5. Run It!

- **Manual**: Go to **Actions** tab → **Codeforces AutoPush** → **Run workflow**
- **Automatic**: It runs every 30 minutes on its own

## Running Locally (Optional)

```bash
pip install -r requirements.txt

# On Windows (PowerShell):
$env:CF_API_KEY = "your_key"
$env:CF_API_SECRET = "your_secret"
$env:CF_HANDLE = "your_handle"
$env:GITHUB_TOKEN = "ghp_your_token"
$env:GITHUB_REPO = "username/repo"
$env:GITHUB_TARGET_DIR = "CodeForces"   # optional

# On Linux/Mac:
export CF_API_KEY="your_key"
export CF_API_SECRET="your_secret"
export CF_HANDLE="your_handle"
export GITHUB_TOKEN="ghp_your_token"
export GITHUB_REPO="username/repo"
export GITHUB_TARGET_DIR="CodeForces"   # optional

python cf_autopush.py
```

## How It Works

1. Verifies API authentication with Codeforces
2. Calls the Codeforces API (`user.status` with `includeSources`) to fetch all your submissions with source code
3. Filters for accepted solutions (`verdict == "OK"`)
4. Keeps only the latest accepted submission per problem
5. Checks `pushed.json` in the target repo to skip already-pushed solutions
6. Commits all new files in a single batch commit via the GitHub API
7. Updates `pushed.json` with the newly pushed submission IDs

## Configuration Reference

| Environment Variable | Required | Description                                    |
|---------------------|----------|------------------------------------------------|
| `CF_API_KEY`        | Yes      | Codeforces API key                             |
| `CF_API_SECRET`     | Yes      | Codeforces API secret                          |
| `CF_HANDLE`         | Yes      | Your Codeforces handle                         |
| `GITHUB_TOKEN`      | Yes      | GitHub PAT with `repo` scope                   |
| `GITHUB_REPO`       | Yes      | Target repo (e.g. `username/ProblemSolving`)   |
| `GITHUB_TARGET_DIR` | No       | Subfolder in target repo (default: repo root)  |

## FAQ

**Q: Is it free?**
Yes. GitHub Actions is free for public repos and includes 2,000 minutes/month for private repos.

**Q: Will it push duplicates?**
No. It tracks pushed submission IDs in `pushed.json` and only keeps the latest accepted solution per problem.

**Q: What if I solve a problem again with a better solution?**
The file will be updated with your latest accepted solution on the next run.

**Q: Can I change the polling interval?**
Yes. Edit the cron expression in `.github/workflows/autopush.yml`. For example, `0 * * * *` for hourly.

## License

MIT
