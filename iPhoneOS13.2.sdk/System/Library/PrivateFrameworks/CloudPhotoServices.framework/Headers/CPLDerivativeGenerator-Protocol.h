//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CPLAdjustments, CPLDerivativesFilter, CPLResource, NSError, NSString, NSURL;

@protocol CPLDerivativeGenerator
+ (_Bool)isUnsupportedOriginalFormatError:(NSError *)arg1;
+ (void)generateDerivativeResourcesFromInputResource:(CPLResource *)arg1 withAdjustments:(CPLAdjustments *)arg2 destinationDirectory:(NSURL *)arg3 derivativesFilter:(CPLDerivativesFilter *)arg4 completionHandler:(void (^)(NSArray *, NSError *))arg5;
+ (_Bool)canGenerateImageDerivativesFromUTI:(NSString *)arg1;
+ (_Bool)isMovieUTI:(NSString *)arg1;
@end
