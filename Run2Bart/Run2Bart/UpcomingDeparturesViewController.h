//
//  UpcomingDeparturesViewController.h
//  Run2Bart
//
//  Created by Pete Hodgson on 3/28/13.
//  Copyright (c) 2013 ThoughtWorks. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Station;

@interface UpcomingDeparturesViewController : UITableViewController
- (id)initForStation:(Station *)station;
@end