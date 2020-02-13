//
//  JFMEntityManager.h
//  FBSnapshotTestCase
//
//  Created by JaimeMiguel on 2/13/20.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JFMEntityManager : NSObject

-(instancetype)initWithDictionaries:(NSDictionary *)dict withSortKeys:(NSArray *)sortKey;
-(instancetype)initWithArray:(NSArray *)array withSortKeys:(NSArray *)sortKey;

@end

NS_ASSUME_NONNULL_END
