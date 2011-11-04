#import "context.h"
#import "support.h"

@implementation SCMContext


+ (id)sharedContext {
    static id sharedContext;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        sharedContext = [[SCMContext alloc] init];
    });
    return sharedContext;
}
- (id)init {
    self = [super init];
    if (self) {
        statuses = [[NSMutableDictionary alloc] init];
    }
    return self;
}

- (NSString *)detectSCMSystemForRoot:(NSString *)root {
    return detect(root);
}
- (void)refreshAtRoot:(NSString *)root system:(NSString *)system {
    [self clearItemsAtRoot:root];
    
    get_status(self);
}
- (NSString *)statusForPath:(NSString *)path {
    return [statuses valueForKey:path];
}
- (void)clearItemsAtRoot:(NSString *)root {
    root = [[root stringByStandardizingPath] stringByAppendingString:@"/"];
    
    NSMutableArray* keys = [NSMutableArray array];
    for (NSString* key in statuses) {
        if ([key hasPrefix:root])
            [keys addObject:key];
    }
    [statuses removeObjectsForKeys:keys];
}
- (void)setStatus:(NSString *)status forPath:(NSString *)path {
    
    [statuses setValue:status forKey:path];
}

@end