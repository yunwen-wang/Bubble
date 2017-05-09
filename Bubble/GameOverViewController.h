//
//  GameOverViewController.h
//  Bubble
//
//  Created by wangyunwen on 17/5/7.
//  Copyright © 2017年 wangyunwen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BubbleViewController.h"

@interface GameOverViewController : UIViewController
@property (weak, nonatomic) IBOutlet UIButton *restartBtn;
@property int score;
@property NSString *gameTime;
@property NSString *userName;
@property NSNumber *bubbleNumber;
@property (weak, nonatomic) IBOutlet UILabel *showScoreLabel;
@property (weak, nonatomic) IBOutlet UIButton *goBackToMenuBtn;
- (IBAction)goToViewController:(id)sender;

@end
