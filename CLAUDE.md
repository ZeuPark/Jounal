# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Repository Overview

Personal notes and experiments repository. Contains C programming practice exercises and automated GitHub Actions workflows.

## Build Commands

### C Programs (in `C Practice/` directory)

Compile a C file:
```bash
gcc -o output_name filename.c
```

Example:
```bash
gcc -o hello hello.c
./hello
```

## Repository Structure

- `C Practice/` - C programming exercises (basic algorithms, I/O practice)
- `.github/workflows/auto_commit.yml` - Daily automated heartbeat commit workflow (runs weekdays at 9-10 AM Sydney time)
- `.heartbeat/` - Auto-generated commit tracking (gitignored locally)
- `.claude/` - Claude Code settings (includes auto-commit hook)

---
*Last updated: 2025-12-28 - auto push test*
