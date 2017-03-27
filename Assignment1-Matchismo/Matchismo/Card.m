//
//  Card.m
//  Matchismo
//
//  Created by Kovacs-Egri, Kristof on 2017. 03. 27..
//  Copyright © 2017. Kovacs-Egri, Kristof. All rights reserved.
//

#import "Card.h"

@interface Card()

@end

@implementation Card


- (int)match:(NSArray *)otherCards
{
    int score = 0;
    
    for (Card *card in otherCards)
    {
        if ([card.contents isEqualToString:self.contents])
        {
            score = 1;
        }
    }
    return score;
}

@end
