//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSAServiceListener, NSString;

@protocol MSAServiceListenerDelegate <NSObject>
- (void)listener:(MSAServiceListener *)arg1 didLooseServiceWithName:(NSString *)arg2;
- (void)listener:(MSAServiceListener *)arg1 didFindServiceWithName:(NSString *)arg2 hostname:(NSString *)arg3 andPort:(unsigned short)arg4;
@end

