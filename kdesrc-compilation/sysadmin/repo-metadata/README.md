This repository holds metadata about KDE's projects and their organisation.

# Managing Projects

All projects live as individual directories inside the `projects-invent/` directory. Inside `projects-invent/` are the top-level groups, matching those you'll find on Gitlab.
Under each group (such as `projects-invent/frameworks/`) are the projects themselves that form part of that group.

## File Structures

The first file you'll deal with in each project is the `metadata.yaml` file. Here's a sample `metadata.yaml`:


    bugzilla:
      product: spectacle
      __do_not_use-legacy-product: ksnapshot
    description: The new screenshot capture utility, replaces KSnapshot
    hasrepo: true
    name: Screenshot Capture Utility
    projectpath: kde/kdegraphics/spectacle
    repoactive: true
    repopath: graphics/spectacle
    identifer: spectacle

First, the mandatory fields. The fields `name` and `description` are to provide a name and description for the project. `projectpath` contains the logical path (in KDE's organisation structure) to the project. Currently, multiple scripts use this information and we don't generate it from the actual on disk path, so this field is mandatory. `identifier` is the unique name used to identify the project across all the groups (as the same repository name could be used in multiple groups).

If your project has a repo, you'll need to set `hasrepo` to `true`. If `hasrepo` is `true`, then you'll have to define two more fields - `repopath`, a path to the repository on disk, and `repoactive`, stating if the repo is active.

The `bugzilla` dictonary tells what is the corrent `product`/`component` for bugzilla. `__do_not_use-legacy-product` points to obsolute product, that was used in past.

The next file you'll deal with is `i18n.json`. This file is much simpler to interpret. Here's an example:

    {
        "trunk": "none",
        "stable": "none",
        "stable_kf5": "Applications/15.12",
        "trunk_kf5": "master"
    }

This file contains a single JSON object, where the key is the i18n branch and the value is the corresponding branch in your Git repository. It couldn't be any simpler.
