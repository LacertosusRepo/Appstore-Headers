//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class ADJActivityPackage;

@protocol ADJRequestHandler
- (void)teardown;
- (void)sendPackage:(ADJActivityPackage *)arg1 queueSize:(unsigned long long)arg2;
- (id)initWithPackageHandler:(id <ADJPackageHandler>)arg1;
@end

