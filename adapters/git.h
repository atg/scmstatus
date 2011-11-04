#import "../adapter.h"
#import "../context.h"

@interface SCMAdapter_git : SCMAdapter {
    SCMContext* context;
    NSString* directory;
}

- (void)refreshStatus;
- (void)add:(NSArray*)paths;
- (void)commit:(NSString *)message;

@end
