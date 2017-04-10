//
//  CardMatchingGame.h
//  Matchismo
//
//  Created by Kovacs-Egri, Kristof on 2017. 04. 07..
//  Copyright © 2017. Kovacs-Egri, Kristof. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Deck.h"
#import "Card.h"

@interface CardMatchingGame : NSObject

//designated initializer
- (instancetype)initWithCardCount:(NSUInteger)count usingDeck:(Deck *)deck;

- (void)chooseCardAtIndex:(NSUInteger)index;
- (Card *)cardAtIndex:(NSUInteger)index;

@property (nonatomic, readonly) NSInteger score;

@end
