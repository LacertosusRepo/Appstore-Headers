//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YTPlayerMacroState;

@protocol YTMacroExpansionProvider <NSObject>
- (id <YTInstreamAd>)currentAd;
- (YTPlayerMacroState *)contentPlayerMacroState;
- (YTPlayerMacroState *)lastKnownAdPlayerMacroState;
@end

