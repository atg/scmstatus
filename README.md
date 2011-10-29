# scmstatus

This library contains functions (in objc) that query an scm repo for the status of its files.

## Progress

All contributions are welcome.

This is a list of SCMs I found on wikipedia:

* **git**: not started
* **hg**: not started
* **svn**: not started
* **cvs**: not started
* **perforce**: not started
* **bazaar**: not started
* **darcs**: not started
* **fossil** (lol): not started

## Adding Support for an SCM

1. Create a file in the `adapters/` directory, for example `adapters/git.h`.
2. Add a *static* function that gets the SCM status and applies it to the context: `static void git_status(SCMContext* ctx) { ... }
3. Add a *static* function, that decides whether a list of files is an scm directory: `static BOOL git_detect(NSString* path, NSSet* filenames) { return [filenames containsObject:@".git"]; }
4. Import this file in `source/support.h`: `#import "adapters/git.h"`
5. Add the status function to `get_status()` in `source/support.m`: `if ([type isEqual:@"git"]) { git_status(ctx); return; }`
6. Add the detection function to `detect()` in `source/suppport.m`: `if (git_detect(path, filenames)) { return @"git"; }`
7. Submit a pull request!

## License

scmstatus doesn't really deserve copyright, but the law being what it is, it is licensed under the WTFPL. Any contributions will be understood to have been released under this license.
