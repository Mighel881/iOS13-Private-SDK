//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocs/BRFileObjectID.h>

@interface BRInodeObjectID : BRFileObjectID
{
    NSUInteger _ino;
}

+ (BOOL)supportsSecureCoding;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isFolderOrAliasID;
- (id)folderID;
- (NSUInteger)rawID;
- (id)asString;
- (id)description;
- (id)initWithFileID:(NSUInteger)arg1;

@end

