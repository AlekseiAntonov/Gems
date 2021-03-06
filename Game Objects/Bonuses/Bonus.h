//
// Created by aleksei on 22.04.2020.
//

#ifndef GEMS_BONUS_H
#define GEMS_BONUS_H

#include "../../Game/Game_Field.h"
enum class Bonus_t {
    BOMB,
    PAINT,
    END_LIST,
};
/*!
 * \class Bonus
 *
 * \brief Class for bonuses.
 *
 * \details Class creates and activates bonuses.
 */
class Bonus {
protected:
    int aims_num = 0; ///< Amount of aims.
    string image_path; ///< Path to the texture.
public:
    /*!
     * \brief Default constructor.
     */
    Bonus() = default;
    /*!
     * \brief Return the pass to the texture.
     * @return Path to the texture
     */
    string get_image_path() const;
    /*!
     * \brief Activates the bonus.
     * @param block_coordinates Coordinates of connected block.
     * @param gf Game objects.
     */
    virtual void activate(Vector2i& block_coordinates, GameField& gf ) const = 0;

    virtual ~Bonus() = default;
};

#endif //GEMS_BONUS_H
