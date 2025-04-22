//
//  TOCropConfiguration.h
//  CropViewController
//
//  Created by 吕小布 on 2025/4/22.
//  Copyright © 2025 Tim Oliver. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface TOCropConfiguration : NSObject

#pragma mark - Toolbar
@property(nonatomic, assign, nullable) UIView  *customToolBar;
#pragma mark - Overlay
@property(nonatomic, strong, nullable) UIColor  *overlayLineColor;



+ (instancetype)sharedInstance ;
@end

NS_ASSUME_NONNULL_END
