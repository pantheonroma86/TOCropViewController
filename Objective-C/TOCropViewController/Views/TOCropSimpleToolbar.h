//
//  TOCropSimpleToolbar.h
//  TOCropViewControllerExample
//
//  Created by 吕小布 on 2025/4/22.
//  Copyright © 2025 Tim Oliver. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface TOCropSimpleToolbar : UIView

@property (nonatomic, strong, readonly) UIButton *cancelIconButton;
@property (nonatomic, strong, readonly) UIButton *doneIconButton;

@property (nullable, nonatomic, copy) void (^cancelButtonTapped)(void);
@property (nullable, nonatomic, copy) void (^doneButtonTapped)(void);

@end

NS_ASSUME_NONNULL_END
