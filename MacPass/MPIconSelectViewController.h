//
//  MPIconSelectViewController.h
//  MacPass
//
//  Created by Michael Starke on 10.03.13.
//  Copyright (c) 2013 HicknHack Software GmbH. All rights reserved.
//

#import "MPViewController.h"

@interface MPIconSelectViewController : MPViewController <NSCollectionViewDelegate>

@property (weak) NSPopover *popover;

- (IBAction)cancel:(id)sender;
- (IBAction)useDefault:(id)sender;

@end
