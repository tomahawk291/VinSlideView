//
//  ViewController.h
//  VinSlideView
//
//  Created by Thang Nguyen on 7/24/15.
//  Copyright (c) 2015 Thang Nguyen. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UIPageViewControllerDataSource>
@property (strong, nonatomic) UIPageViewController *pageViewController;
@property (strong, nonatomic) NSArray *pageTitles;
@property (strong, nonatomic) NSArray *pageImages;
@end



