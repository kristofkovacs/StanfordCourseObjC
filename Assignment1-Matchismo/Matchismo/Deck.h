//
//  Deck.h
//  Matchismo
//
//  Created by Kovacs-Egri, Kristof on 2017. 03. 27..
//  Copyright © 2017. Kovacs-Egri, Kristof. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

- (Card *)drawRandomCard;

@end
