import { Metadata } from "next";

type Props = {
    params: Promise<{ productId: string }>;
};

function getRandomInt(count: number) {
    return Math.floor(Math.random() * count) + 1;
}

export const generateMetadata = async ({params}: Props): Promise<Metadata> => {
    const id = (await params).productId;
    return {
        title: `Product ${id}`,
    };
}
export default async function ProductReview({params}: Props){
    const random = getRandomInt(2);
    if (random === 1) {
        throw new Error('Error loading product🥴🥲');
    }
    const productId  = (await params).productId;
    return <h1>Detail about product {productId}</h1>
}