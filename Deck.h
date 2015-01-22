//
//  Deck.h
//  learnDemo
//
//  Created by Leiyou Who on 1/22/15.
//  Copyright (c) 2015 Leiyou Who. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"
@interface Deck : NSObject
- (void)addCard: (Card *)card atTop:(BOOL)atTop;
- (void)addCard: (Card *)card;
- (Card *)drawRandomCard;
@end
