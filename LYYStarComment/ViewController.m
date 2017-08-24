//
//  ViewController.m
//  LYYStarComment
//
//  Created by lyy on 2017/8/22.
//  Copyright © 2017年 LVY. All rights reserved.
//

#import "ViewController.h"

#import "LYYStarView.h"

@interface ViewController ()

@property(nonatomic,strong) LYYStarView *starView;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    
    self.view.backgroundColor = [UIColor grayColor];
    
    _starView = [[LYYStarView alloc]initWithFrame:CGRectMake(0, 100, 300, 50) starSize:CGSizeZero withStyle:LYYStarTypeFloat];
    
    [_starView getStarIntegral:^(NSString *value) {
        NSLog(@"%@",value);
    }];
    
    
    [self.view addSubview:_starView];

}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}


@end
