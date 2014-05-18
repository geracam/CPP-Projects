//
//  IDGAFOSView.m
//  IDGAFOS
//
//  Created by Gerardo Camarena Gomez on 5/17/14.
//  Copyright (c) 2014 Gerardo Camarena Gomez. All rights reserved.
//

#import "IDGAFOSView.h"

@implementation IDGAFOSView

- (id)initWithFrame:(NSRect)frame isPreview:(BOOL)isPreview
{
    self = [super initWithFrame:frame isPreview:isPreview];
    if (self) {
        [self setAnimationTimeInterval:1/30.0];
    }
    return self;
}

- (void)startAnimation
{
    [super startAnimation];
}

- (void)stopAnimation
{
    [super stopAnimation];
}

- (void)drawRect:(NSRect)rect
{
    [super drawRect:rect];
}

- (void)animateOneFrame
{
    return;
}

- (BOOL)hasConfigureSheet
{
    return NO;
}

- (NSWindow*)configureSheet
{
    return nil;
}

@end
