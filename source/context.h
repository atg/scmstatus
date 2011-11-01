#import <Foundation/Foundation.h>

@interface SCMContext : NSObject {
    NSMutableDictionary* statuses;
}

+ (id)sharedContext;
- (void)setStatus:(NSString *)status forPath:(NSString *)path;

@end

