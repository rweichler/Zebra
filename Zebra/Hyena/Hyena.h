//
//  Hyena.h
//  Zebra
//
//  Created by Wilson Styres on 3/20/19.
//  Copyright © 2019 Wilson Styres. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Hyena : NSObject {
    NSArray *repos;
}
- (id)initWithSourceListPath:(NSString *)trail;
- (void)downloadReposWithCompletion:(void (^)(NSDictionary *fileUpdates, BOOL success))completion ignoreCache:(BOOL)ignore;
@end

NS_ASSUME_NONNULL_END