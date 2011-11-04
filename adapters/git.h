#import "../source/adapter_subclass.h"

@interface SCMAdapter_git : SCMAdapter {
}

- (void)refreshStatus;
- (void)add:(NSArray*)paths;
- (void)commit:(NSString *)message;

@end
