//
//  SCPost.m
//  Social
//
//  Created by Xinrui Lu on 9/23/17.
//  Copyright © 2017 AXL. All rights reserved.
//

#import "SCPost.h"

@implementation SCPost

- (instancetype)initWithDictionary:(NSDictionary *)dict
{
    if (self = [super init]) {
        self.name = dict[@"user"];
        self.message = dict[@"message"];
        return self;
    }
    return nil;
}

@end
