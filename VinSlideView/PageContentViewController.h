//
//  PageContentViewController.h
//  VinSlideView
//
//  Created by Thang Nguyen on 8/6/15.
//  Copyright (c) 2015 Thang Nguyen. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PageContentViewController : UIViewController
@property (weak, nonatomic) IBOutlet UIImageView *backgroundImageView;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property NSUInteger pageIndex;
@property NSString *titleText;
@property NSString *imageFile;

@end
