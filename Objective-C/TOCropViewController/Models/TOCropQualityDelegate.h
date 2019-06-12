//
//  TOCropQualityDelegate.h
//  TOCropViewControllerExample
//
//  Created by Tkachenko on 11/06/2019.
//  Copyright © 2019 Tim Oliver. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol TOCropQualityDelegate <NSObject>

- (nonnull UIImage *)getAlertIcon;
- (BOOL)checkQualityForPixelSize:(CGSize)size;
- (void)showAlert;

@end

NS_ASSUME_NONNULL_END
