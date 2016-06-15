//
//  ViewController.h
//  SearchBarProgram
//
//  Created by MTCHNDT on 15/06/16.
//  Copyright © 2016 MTPL. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UISearchControllerDelegate, UISearchBarDelegate, UISearchResultsUpdating>

@property (nonatomic, weak) IBOutlet UITableView * tableList;
@property (nonatomic, strong) UISearchController * searchController;
@property (nonatomic, strong) NSMutableArray * allItems;
@property (nonatomic, strong) NSMutableArray * filteredItems;
@property (nonatomic, weak) NSArray * displayedItems;



@end

