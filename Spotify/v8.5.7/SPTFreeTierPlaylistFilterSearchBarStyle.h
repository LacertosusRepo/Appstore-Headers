//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEAccessoryIconButtonStyle, NSString;

@interface SPTFreeTierPlaylistFilterSearchBarStyle : NSObject <GLUEStyle>
{
    GLUEAccessoryIconButtonStyle *_contextMenuButtonStyle;
    double _margin;
}

@property(nonatomic) double margin; // @synthesize margin=_margin;
@property(copy, nonatomic) GLUEAccessoryIconButtonStyle *contextMenuButtonStyle; // @synthesize contextMenuButtonStyle=_contextMenuButtonStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
