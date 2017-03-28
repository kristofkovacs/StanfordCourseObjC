//
//  PlayingCard.h
//  Matchismo
//
//  Created by Kovacs-Egri, Kristof on 2017. 03. 28..
//  Copyright © 2017. Kovacs-Egri, Kristof. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *) validSuits;
+ (NSInteger) maxRank;

@end
