#import <Foundation/Foundation.h>

@class SCMContext;

@interface SCMAdapter : NSObject {
    SCMContext* context;
    NSString* directory;
}

@property (assign) SCMContext* context;
@property (copy) NSString* directory;

- (void)runCommand:(NSArray *)arguments completionHandler:(void(^)(NSString*))completionHandler;

// Available methods (do not implement in SCMAdapter!)
// - (void)refreshStatus;
// - (void)add:(NSArray*)paths;
// - (void)commit:(NSString *)message;

@end
