//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, SPTID3Parser;

@protocol SPTID3ParserDelegate <NSObject>
- (void)id3Parser:(SPTID3Parser *)arg1 didEncounterError:(NSError *)arg2;
- (void)id3ParserDidFinishLoading:(SPTID3Parser *)arg1;
@end

