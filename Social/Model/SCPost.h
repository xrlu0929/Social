//
//  SCPost.h
//  Social
//
//  Created by Xinrui Lu on 9/23/17.
//  Copyright © 2017 AXL. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SCPost : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, strong) NSDate *postDate;

- (instancetype)initWithDictionary:(NSDictionary *)dict;

@end
