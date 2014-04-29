//
//  OHMSurveyDetailViewController.h
//  ohmage_ios
//
//  Created by Charles Forkish on 4/8/14.
//  Copyright (c) 2014 VPD. All rights reserved.
//

#import <UIKit/UIKit.h>

@class OHMSurvey;

@interface OHMSurveyDetailViewController : UITableViewController

- (instancetype)initWithSurvey:(OHMSurvey *)survey;

- (void)popToNavigationRootAnimated;

@end
