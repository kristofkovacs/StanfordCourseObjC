//
//  Card.h
//  Matchismo
//
//  Created by Kovacs-Egri, Kristof on 2017. 03. 27..
//  Copyright © 2017. Kovacs-Egri, Kristof. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong, nonatomic) NSString *contents;

@property (nonatomic, getter = isChosen) BOOL chosen;
@property (nonatomic, getter = isMatched) BOOL matched;

- (int)match:(NSArray *)otherCards;

@end
