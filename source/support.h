#import "adapters/git.h"

void get_status(SCMContext* ctx);
NSString* detect(NSString* path);


// Status values

// There is nothing to report about this file. Everything is as expected.
extern NSString* const SCMStatus_Blank;

// The file has been ignored (eg in .gitignore)
extern NSString* const SCMStatus_FileIgnored;

// The file is unknown to the version control. It probably needs to be added.
extern NSString* const SCMStatus_Unversioned;

// The file should be here, but it isn't.
extern NSString* const SCMStatus_Missing;

// The file has been changed, but the change has not been added to the staging area
extern NSString* const SCMStatus_UnstagedChanges;

// The file has been modified, and this modification has been recorded. Awaiting commit.
extern NSString* const SCMStatus_Modified;
// The file has been renamed, and this rename has been recorded. Awaiting commit.
extern NSString* const SCMStatus_Renamed;
// The file has been deleted, and this deletion has been recorded. Awaiting commit.
extern NSString* const SCMStatus_Deleted;
// The file has been added and this add has been recorded. Awaiting commit.
extern NSString* const SCMStatus_Added;

// The file has some status, but we don't know how to represent it
extern NSString* const SCMStatus_Misc;