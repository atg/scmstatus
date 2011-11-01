#import "support.h"
#import "context.h"

// #import "adapters/git.h"

void get_status(SCMContext* ctx) {
    
    // if ([type isEqual:@"git"]) { git_status(ctx); return; }
    
    
}
NSString* detect(NSString* path) {
    
    NSArray* filenames = [[NSFileManager defaultManager] contentsOfDirectoryAtPath:path error:NULL];
    
    // if (git_detect(path, filenames)) { return @"git"; }
    return nil;
}