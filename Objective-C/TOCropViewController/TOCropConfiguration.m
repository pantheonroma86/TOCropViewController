//
//  TOCropConfiguration.m
//  CropViewController
//
//  Created by 吕小布 on 2025/4/22.
//  Copyright © 2025 Tim Oliver. All rights reserved.
//

#import "TOCropConfiguration.h"

@implementation TOCropConfiguration

+ (instancetype)sharedInstance {
    static dispatch_once_t pred;
    static TOCropConfiguration *sharedInstance;
    dispatch_once(&pred, ^{
        sharedInstance = [[TOCropConfiguration alloc] init];
    });
    return sharedInstance;
}

- (instancetype)init {
    self = [super init];
    if (self) {
        [self initDefaultConfiguration];
    }
    return self;
}

#pragma mark - Initialize default values

- (void)initDefaultConfiguration {
    self.overlayLineColor = [UIColor whiteColor];
}
@end
