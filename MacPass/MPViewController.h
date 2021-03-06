//
//  MPViewController.h
//  MacPass
//
//  Created by Michael Starke on 17.02.13.
//  Copyright (c) 2013 HicknHack Software GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MPViewController : NSViewController

@property (nonatomic, readonly) NSWindowController *windowController;

- (void)didLoadView;
- (NSResponder *)reconmendedFirstResponder;
- (void)updateResponderChain;



#pragma mark Binding Observation
/**
 *  Override this to get notificied when setValue:forKeyPath will be called with a keypath starting with representedObject.
 *  This is always called via the binding system, hence it's usefull to anticipate model changes via the ui
 *
 *  The default implementation calls this just befor setValue:forKeyPath:
 *
 *  @param keyPath the full key path about to be affected
 */
- (void)willChangeValueForRepresentedObjectKeyPath:(NSString *)keyPath;
/**
 *  Override this to get notified when setValue:forKeyPath was called with a keypath starting with representedObject.
 *  The default implementation calls this right after setValue:forKeyPath:
 *
 *  @param keyPath the full key path affected
 */
- (void)didChangeValueForRepresentedObjectKeyPath:(NSString *)keyPath;

@end
