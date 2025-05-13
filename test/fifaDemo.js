import { Client, Regions, Countries, Seasons, Positions } from '@hongbeccodeduocchua/fo4-db';

const client = new Client({
  region: Regions.VN, // Chọn khu vực Việt Nam
});

async function getPlayerInfo() {
  const country = 'England';  // Đặt giá trị cho country
  const season = '23TY';     // Đặt giá trị cho season
  

  try {
    const players = await client.player.find({
      country: Countries.england, // Lọc theo quốc gia
      seasons: [Seasons["23TY"]], // Lọc theo mùa giải
    });

    console.log(`Danh sách cầu thủ ${country} mùa giải ${season} :`);
    players.forEach(player => {
      console.log(`- ${player.name} (${player.team}) `);
    });
  } catch (error) {
    console.error("Lỗi khi lấy dữ liệu cầu thủ:", error);
  }
}

getPlayerInfo();
