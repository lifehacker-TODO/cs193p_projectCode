//
//  PlayingCard.h
//  learnDemo
//
//  Created by Leiyou Who on 1/22/15.
//  Copyright (c) 2015 Leiyou Who. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"
 
@interface PlayingCard : Card
@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSInteger rank;
@end
