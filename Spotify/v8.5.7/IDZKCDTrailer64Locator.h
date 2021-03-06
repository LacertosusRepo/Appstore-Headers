//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDZKCDTrailer64Locator : NSObject
{
    unsigned int _magicNumber;
    unsigned int _diskNumberWithStartOfCentralDirectory;
    unsigned int _numberOfDisks;
    unsigned long long _offsetOfStartOfCentralDirectoryTrailer64;
}

+ (id)recordWithArchivePath:(id)arg1 andCDTrailerLength:(unsigned long long)arg2;
+ (id)recordWithData:(id)arg1 atOffset:(unsigned long long)arg2;
@property unsigned int numberOfDisks; // @synthesize numberOfDisks=_numberOfDisks;
@property unsigned long long offsetOfStartOfCentralDirectoryTrailer64; // @synthesize offsetOfStartOfCentralDirectoryTrailer64=_offsetOfStartOfCentralDirectoryTrailer64;
@property unsigned int diskNumberWithStartOfCentralDirectory; // @synthesize diskNumberWithStartOfCentralDirectory=_diskNumberWithStartOfCentralDirectory;
@property unsigned int magicNumber; // @synthesize magicNumber=_magicNumber;
- (id)description;
- (unsigned long long)length;
- (id)data;
- (id)init;

@end

