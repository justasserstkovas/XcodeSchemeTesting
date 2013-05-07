//
//  FlipsideViewController.h
//  XcodeSchemeTest
//
//  Created by Justas Serstkovas on 07/05/2013.
//  Copyright (c) 2013 Justas Serstkovas. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FlipsideViewController;

@protocol FlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(FlipsideViewController *)controller;
@end

@interface FlipsideViewController : UIViewController

@property (weak, nonatomic) id <FlipsideViewControllerDelegate> delegate;

- (IBAction)done:(id)sender;

@end
