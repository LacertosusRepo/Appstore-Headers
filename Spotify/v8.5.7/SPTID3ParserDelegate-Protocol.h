//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SPTID3Parser;

@protocol SPTID3ParserDelegate <NSObject>
- (void)id3Parser:(SPTID3Parser *)arg1 didEncounterError:(NSError *)arg2;
- (void)id3ParserDidFinishLoading:(SPTID3Parser *)arg1;
@end

