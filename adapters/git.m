#import "git.h"

@implementation SCMAdapter_git

- (void)refreshStatus {
	
}
- (void)add:(NSArray*)paths {
	
}
- (void)commit:(NSString *)message {
	NSMutableArray* args = [NSMutableArray array];
	[args addObject:@"git"];
	[args addObject:@"commit"];
	[args addObject:@"-m"];
	[args addObject:message];
	
	[self runCommand:args completionHandler:^ void (NSString* result) ^{
		[context nudgeStatus];
	}];
}

@end
