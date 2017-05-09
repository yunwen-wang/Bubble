//
//  BubbleViewController.h
//  Bubble
//
//  Created by wangyunwen on 17/5/7.
//  Copyright © 2017年 wangyunwen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BubbleModel.h"

@interface BubbleViewController : UIViewController

@property (weak, nonatomic) NSString *userName;
@property (weak, nonatomic) IBOutlet UILabel *timeLabel;
@property (weak, nonatomic) NSString *gameTime;
@property (weak, nonatomic) NSNumber *bubbleNumber;

-(IBAction)touchBubble:(UIButton*)sender;
-(UIButton*) createBubbleButtonWithColor:(NSString*)color withRect:(CGRect)rect;

@end