#import "adapter.h"

@implementation SCMAdapter

@synthesize context;
@synthesize directory;

- (void)runCommand:(NSArray *)arguments completionHandler:(void(^)(NSString*))completionHandler {
	// Run `/usr/bin/env <arguments>` with |directory| as the working directory. When we get output, run |completionHandler|
	
	// ...
}

@end
