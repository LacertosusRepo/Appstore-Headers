//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSURL;

@interface ANSCompressLogOperation : NSOperation
{
    NSURL *_uncompressedLogURL;
    NSURL *_compressedLogURL;
}

@property(retain, nonatomic) NSURL *compressedLogURL; // @synthesize compressedLogURL=_compressedLogURL;
@property(retain, nonatomic) NSURL *uncompressedLogURL; // @synthesize uncompressedLogURL=_uncompressedLogURL;
- (void).cxx_destruct;
- (id)compressedURLForUncompressedURL:(id)arg1;
- (void)main;
- (id)initWithUncompressedLogURL:(id)arg1 compressedLogURL:(id)arg2;

@end
