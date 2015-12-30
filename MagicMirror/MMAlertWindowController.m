//
//  MMAlertWindow.m
//  MagicMirror2
//
//  Created by James Tang on 29/12/2015.
//  Copyright © 2015 James Tang. All rights reserved.
//

#import "MMAlertWindowController.h"
#import "MagicMirror.h"

@implementation MMAlertWindowController

- (void)showWindow:(nullable id)sender {
    [super showWindow:sender];
    [NSApp runModalForWindow: self.window];
}

- (void)windowWillClose:(NSNotification *)notification {
    [super windowWillClose:notification];
    [NSApp stopModal];
}

- (void)close {
    [super close];
    [NSApp stopModal];
}

@end